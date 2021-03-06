/******************************************************************************
** KVNTable 0.2
** Copyright (C) 2011 Valery Kharitonov <kharvd@gmail.com>
**
** This file is part of KVNTable.
**
** $QT_BEGIN_LICENSE:GPL$
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
** $QT_END_LICENSE$
**
** If you have questions regarding the use of this file, please contact me at
** kharvd@gmail.com.
**
******************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tablestagestandings.h"
#include "tabletotalstandings.h"

namespace Ui {
    class wndMain;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

public slots:
    void newTable();
    void marksChangedStage();

private slots:
    void aboutQt();
    void about();
    void fullscreenToggled(bool isActivated);
    void showSettingsDlg();
    void loadStyleSheet();
    void changeStageTitle(int curr);
    void resizeTeamSections(int newSize);
    void exitFullscreen();
    void saveTable();
    void openTable();

private:
    void deleteTabs();
    void loadSettings();

    bool wasMaximized;
    QString m_iniFile;
    QStringList m_stages;
    Ui::wndMain *ui;
};

#endif // MAINWINDOW_H
