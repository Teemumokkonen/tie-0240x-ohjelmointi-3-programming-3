#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include "dialoggamesettings.hh"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QHBoxLayout>
#include <QString>
#include <QTimer>
#include <iostream>
#include <memory>
#include <QVector>
#include <map>

const int PADDING = 20;

namespace Ui {
class MainWindow;
}

namespace StudentSide {

/*!
 * \brief The mainwindow class
 */
class mainwindow : public QMainWindow
{
    Q_OBJECT

public:

    /*!
     * \brief mainwindow
     * \param parent
     */
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
    void setBackground(QImage &image);

public slots:

    /*!
     * \brief adjustGameSettings
     */
    void adjustGameSettings(QString  name);

    void defaultSettings();

private:
    Ui::MainWindow *ui_;
    QGraphicsScene *map;
    QString playerName_ = "Timo";

    const int width_ = 500;
    const int height_ = 500;

};
} //namespace
#endif // MAINWINDOW_HH
