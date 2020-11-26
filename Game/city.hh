﻿#ifndef CITY_HH
#define CITY_HH

#include "interfaces/icity.hh"
#include <QTime>
#include <algorithm>
#include "mainwindow.hh"
#include "actor.hh"
#include "vehicle.hh"
#include "actor.hh"

namespace StudentSide
{

class City : public Interface::ICity
{
public:
    City();
    ~City();

    void setBackground(QImage& basicbackground, QImage& bigbackground);

    void setClock(QTime clock);

    void addStop(std::shared_ptr<Interface::IStop> stop);

    void startGame();

    void addActor(std::shared_ptr<Interface::IActor> newactor);

    void removeActor(std::shared_ptr<Interface::IActor> actor);

    void actorRemoved(std::shared_ptr<Interface::IActor> actor);

    bool findActor(std::shared_ptr<Interface::IActor> actor) const;

    std::vector<std::shared_ptr<Interface::IActor> > getNearbyActors(Interface::Location loc) const;

    void actorMoved(std::shared_ptr<Interface::IActor> actor);

    bool isGameOver() const;

    QImage getImage(std::string image_size);

    void addUi(std::shared_ptr<StudentSide::mainwindow> ui);

    void makePlayer();

private:

    QImage small_;
    QImage big_;
    std::vector<std::shared_ptr<Interface::IActor>> actors_;
    std::vector<std::shared_ptr<Interface::IStop>> stops_;
    std::shared_ptr<StudentSide::mainwindow> ui_;
    QTime time_;

    std::vector<std::shared_ptr<Interface::IActor>> movedActors;
    std::shared_ptr<StudentSide::Actor> player_ ;


    //const int DEFAUL_X = 500;
    //const int DEFAULT_Y = -500;
};

} //namespace


#endif // CITY_HH
