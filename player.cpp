#include "player.h"


Player::Player(QObject* parent) :
        QObject(parent), balance_(0),
        per_click_(1), per_second_(1), tap_factor(1) {

}

void Player::click() {
    balance_ += per_click_ * tap_factor;
    emit balanceChanged();
}

QString Player::balance() const {
    return QString::fromStdString(balance_.ToShortString());
}

QString Player::per_click() const {
    return QString::fromStdString(per_click_.ToShortString());
}

QString Player::per_second() const {
    return QString::fromStdString(per_second_.ToShortString());
}

void Player::FullUpdate() {
    emit balanceChanged();
    emit perClickChanged();
    emit perSecondChanged();
}

