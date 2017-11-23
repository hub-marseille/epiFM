#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    player(new QMediaPlayer(this, QMediaPlayer::StreamPlayback))
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void    MainWindow::changeAudioStream(QUrl url)
{
    player->setMedia(url);
    player->setVolume(80);
    player->play();
}

void    MainWindow::on_interButton_clicked()
{
    changeAudioStream(QUrl("http://direct.franceinter.fr/live/franceinter-midfi.mp3"));
}

void    MainWindow::on_infoButton_clicked()
{
    changeAudioStream(QUrl("http://direct.franceinfo.fr/live/franceinfo-midfi.mp3"));
}
