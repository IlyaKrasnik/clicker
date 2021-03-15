#ifndef PLAYER_H
#define PLAYER_H
#include <big_integer.h>

#include <future>
#include <QObject>

class Player : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString balance READ balance NOTIFY balanceChanged)
    Q_PROPERTY(QString per_click READ per_click NOTIFY perClickChanged)
    Q_PROPERTY(QString per_second READ per_second NOTIFY perSecondChanged)
public:
    Player(QObject* parent = nullptr);

    Q_INVOKABLE void click();

    QString balance() const;
    QString per_click() const;
    QString per_second() const;

signals:
    void balanceChanged();
    void perClickChanged();
    void perSecondChanged();

private:
    BigInteger balance_;
    BigInteger per_click_;
    BigInteger per_second_;
    size_t tap_factor, clicks_per_prev_second, seconds_in_row;
    void FullUpdate();
};

#endif // PLAYER_H
