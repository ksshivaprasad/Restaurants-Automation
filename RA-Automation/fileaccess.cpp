#include "fileaccess.h"
#include <QFile>
#include <QDebug>
#include <QString>
#include <QStringList>

FileAccess::FileAccess()
{
}

int FileAccess::writeToFile(QString fileName,QStringList Values)
{
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly|QFile::Truncate)) {
        qDebug() << file.errorString();
        return 1;
    }


    QTextStream stream(&file);

    for(int i = 0;i<Values.size();i++)
    {
        stream << Values.at(i) << "\t\n"; // this writes first line with two columns
    }
    file.close();

}

QStringList FileAccess::readFromFile(QString fileName)
{
    qDebug() << "File name is: " <<fileName;
    QStringList wordList;
    int i = 0;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return wordList;
    }

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        wordList.append(line.data());
        i++;
    }
    //qDebug() << wordList;

    return wordList;
}

