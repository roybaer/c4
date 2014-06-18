#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "../Player.h"

class ARToolkitWidget;

class HumanPlayer : public Player
{
public:
    void move();

    void setGameWidget(ARToolkitWidget* gameWidget);

//private slots:
//    void onArChipDropped(int column);

private:
    ARToolkitWidget* m_gameWidget;
};

#endif // HUMANPLAYER_H