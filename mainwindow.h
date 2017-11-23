#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMediaPlayer    *player;

    void    changeAudioStream(QUrl);

public slots:
    void    on_interButton_clicked();
    void    on_infoButton_clicked();
};

#endif // MAINWINDOW_H
