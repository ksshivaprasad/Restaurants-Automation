#include<QDebug>
#include<QList>
#include<QTextEdit>
#include "managerecipe.h"
#include "ui_managerecipe.h"
#include "recipecontroller.h"
#include "grocerycontroller.h"
#include "recipe.h"
#include "groceryitem.h"
#include "viewrecipe.h"
manageRecipe::manageRecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageRecipe)
{
    ui->setupUi(this);
    init();
}

void manageRecipe::init()
{
    pupulateRecipe();
    pupulateGroceryTable();
}

manageRecipe::~manageRecipe()
{
    delete ui;
}
void manageRecipe::pupulateRecipe()
{
    qDebug() << "populateRecipe";
    QList<Recipe*> recipeItems = RecipeController::getInstance()->getRecipes();

    ui->RecipeListWidget->clearContents();
    ui->RecipeListWidget->setRowCount(recipeItems.size());
    ui->RecipeListWidget->setColumnCount(3);
    for(int i =0;i< recipeItems.size();i++)
    {

        ui->RecipeListWidget->setItem(i, 0,  new QTableWidgetItem(QString::number(recipeItems.at(i)->getId())));
        ui->RecipeListWidget->setItem(i, 1, new QTableWidgetItem(recipeItems.at(i)->getName()));

        //Button
        QWidget* pWidget = new QWidget();
        QPushButton* btn_remove = new QPushButton();
        btn_remove->setText("Remove");
        btn_remove->setProperty("Key",recipeItems.at(i)->getId() );
        QObject::connect(btn_remove, SIGNAL(clicked()),this, SLOT(on_removeRecipeButton_clicked()));

        QPushButton* btn_view = new QPushButton();
        btn_view->setText("View");
        btn_view->setProperty("Key",recipeItems.at(i)->getId() );
        QObject::connect(btn_view, SIGNAL(clicked()),this, SLOT(on_viewRecipeButton_clicked()));

        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(btn_remove);
        pLayout->addWidget(btn_view);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);
        ui->RecipeListWidget->setCellWidget(i, 2, pWidget);
       // qDebug() << menuItems.at(i)->getName();

    }

}


void manageRecipe::pupulateGroceryTable()
{
    QList<GroceryItem*> groceryItems = GroceryController::getInstance()->getGroceryList();

    ui->groceryListWidget->clearContents();

    ui->groceryListWidget->setRowCount(groceryItems.size());
    ui->groceryListWidget->setColumnCount(2);
    for(int i =0;i< groceryItems.size();i++)
    {
        ui->groceryListWidget->setItem(i, 0,  new QTableWidgetItem((groceryItems.at(i)->getName())));
        ui->groceryListWidget->setItem(i, 1,  new QTableWidgetItem(0));
       /* QWidget* pWidget = new QWidget();

        QTextEdit* quantity_edit = new QTextEdit();
        quantity_edit->setProperty("Key",groceryItems.at(i)->getId());
        QObject::connect(quantity_edit, SIGNAL(textChanged()),this, SLOT(on_textChanged()));
        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(quantity_edit);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);
        ui->groceryListWidget->setCellWidget(i, 1, pWidget);*/

    }
}

QList<int> manageRecipe::getGroceryList()
{
    QList<int> list;
    int row_count = ui->groceryListWidget->rowCount();
    qDebug() << "getGroceryList" << "\t" << row_count;
    for(int i=0;i<row_count;i++)
    {
        if((ui->groceryListWidget->item(i,1)) != 0)
        {
            qDebug() << "Appended" << "\t" << ui->groceryListWidget->item(i,1)->text();
            list.append((ui->groceryListWidget->item(i,1)->text().toInt()));
        }

    }
    qDebug() << list.size();
     qDebug() << list;
    return list;
}

void manageRecipe::on_removeRecipeButton_clicked()
{
    qDebug() << "In remove";
    QVariant row = sender()->property("Key");
    qDebug() << row.toInt();
    RecipeController::getInstance()->removeRecipe((row.toInt()));
    pupulateRecipe();
}

void manageRecipe::on_viewRecipeButton_clicked()
{
     QVariant row = sender()->property("Key");
     viewRecipe* viewRecipeView= new viewRecipe(this,(row.toInt()-1));

    viewRecipeView->show();
}

void manageRecipe::cellClicked(int row,int col)
{
    //QVariant row = sender()->property("Key");

    qDebug() << "Text changed" <<"\t" << (row)  ;
    //qDebug() << "Text changed" <<"\t" << ui->groceryListWidget->item((row.toInt()-1),1);
    //ui->groceryListWidget->item(row.toInt(),1)->setText(((QTextEdit*)(ui->groceryListWidget->item(row.toInt(),1)))->toPlainText());
}

void manageRecipe::on_addRecipe_clicked()
{
    qDebug() << "addItem";
    QList<int> groceryList = getGroceryList();
    RecipeController::getInstance()->addRecipe(0,ui->recipeName->toPlainText(),
                                               ui->instructions->toPlainText(),groceryList,ui->quantity->toPlainText().toInt(),1);
    ui->recipeName->clear();
    ui->instructions->clear();
    ui->quantity->clear();
    pupulateRecipe();
}
