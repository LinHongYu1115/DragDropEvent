#ifndef DRAGDROPEVENT_H
#define DRAGDROPEVENT_H

#include <QMainWindow>
#include <QLabel>

class DragDropEvent : public QMainWindow
{
    Q_OBJECT

public:
    DragDropEvent(QWidget *parent = nullptr);
    ~DragDropEvent();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private:
    QLabel *boatIcon;
    QLabel *carIcon;
    QLabel *houseIcon;
};
#endif // DRAGDROPEVENT_H
