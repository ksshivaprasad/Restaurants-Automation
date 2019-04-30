#ifndef FILEACCESS_H
#define FILEACCESS_H
#include<QString>
#include<QStringList>

class FileAccess
{
public:
    FileAccess();
    int writeToFile(QString fileName,QStringList Values);
    QStringList readFromFile(QString fileName);
};

#endif // FILEACCESS_H
