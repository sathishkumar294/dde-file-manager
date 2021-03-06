#ifndef STANDARDPATH_H
#define STANDARDPATH_H

#include <QString>

class StandardPath
{
public:
    StandardPath();
    ~StandardPath();

    static QString getAppConfigPath();
    static QString getHomePath();
    static QString getDesktopPath();
    static QString getVideosPath();
    static QString getMusicPath();
    static QString getPicturesPath();
    static QString getDocumentsPath();
    static QString getDownloadsPath();
    static QString getCachePath();
    static QString getConfigPath();
    static QString getTrashPath();
};

#endif // STANDARDPATH_H
