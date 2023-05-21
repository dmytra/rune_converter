
#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QTextFormat>

QT_BEGIN_NAMESPACE
class QTextEdit;
class QPushButton;
class QLineEdit;
class QLabel;
QT_END_NAMESPACE

class Window : public QWidget
{
    Q_OBJECT

public:
    enum { SvgTextFormat = QTextFormat::UserObject + 1};
    enum SvgProperties { SvgData = 1 };

    Window();

public slots:
    void funInsertTextObjectButton(int);
    void funinsertTextObjectButtonCYR_RUN();
    void funinsertTextObjectButtonENG_RUN();
    void funInsertTextObjectButton1();
    void funInsertTextObjectButton2();
    void funInsertTextObjectButton3();
    void funInsertTextObjectButton4();
    void funInsertTextObjectButton5();
    void funInsertTextObjectButton6();
    void funInsertTextObjectButton7();
    void funInsertTextObjectButton8();
    void funInsertTextObjectButton9();
    void funInsertTextObjectButton10();
    void funInsertTextObjectButton11();
    void funInsertTextObjectButton12();
    void funInsertTextObjectButton13();
    void funInsertTextObjectButton14();
    void funInsertTextObjectButton15();
    void funInsertTextObjectButton16();
    void funInsertTextObjectButton17();
    void funInsertTextObjectButton18();
    void funInsertTextObjectButton19();
    void funInsertTextObjectButton20();
    void funInsertTextObjectButton21();
    void funInsertTextObjectButton22();
    void funInsertTextObjectButton23();
    void funInsertTextObjectButton24();
    void funInsertTextObjectButton25();

private:
    void setupTextObject();
    void setupGui();

private:
    QTextEdit *textEdit;
    QLabel *fileNameLabel;
    QLineEdit *fileNameLineEdit;
    QPushButton *insertTextObjectButtonENG_RUN;
    QPushButton *insertTextObjectButtonCYR_RUN;
};

#endif
