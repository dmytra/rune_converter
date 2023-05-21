#include <QtWidgets>
#include <QtSvg>

#include "window.h"
#include "svgtextobject.h"

Window::Window()
{
    setupGui();
    setupTextObject();

    setWindowTitle("Text Object Example");
}
void Window::funinsertTextObjectButtonENG_RUN()
{
        textEdit->selectAll();
        QString newtext = textEdit->toPlainText();
        newtext = newtext.toUpper();
        textEdit->setText(newtext);
        QChar *data = newtext.data();
        textEdit->clear();
        while (!data->isNull()) {
            switch (data->unicode()) // https://www.vectorstock.com/royalty-free-vector/runic-alphabet-and-its-latin-letter-interpretation-vector-24248451
                // https://i.etsystatic.com/25902823/r/il/82b88b/2680956287/il_fullxfull.2680956287_64gw.jpg
            {
            case 'A':
                    funInsertTextObjectButton(4);
                    break;
            case 'B':
                    funInsertTextObjectButton(18);
                    break;
            case 'C':
                    funInsertTextObjectButton(6);
                    break;
            case 'D':
                    funInsertTextObjectButton(24);
                    break;
            case 'E':
                    funInsertTextObjectButton(19);
                    break;
            case 'F':
                    funInsertTextObjectButton(1);
                    break;
            case 'G':
                    funInsertTextObjectButton(7);
                    break;
            case 'H':
                    funInsertTextObjectButton(9);
                    break;
            case 'I':
                    funInsertTextObjectButton(11);
                    break;
            case 'J':
                    funInsertTextObjectButton(12);
                    break;
            case 'K':
                    funInsertTextObjectButton(6);
                    break;
            case 'L':
                    funInsertTextObjectButton(21);
                    break;
            case 'M':
                    funInsertTextObjectButton(20);
                    break;
            case 'N':
                    funInsertTextObjectButton(10);
                    break;
            case 'O':
                    funInsertTextObjectButton(23);
                    break;
            case 'P':
                    funInsertTextObjectButton(14);
                    break;
            case 'Q':
                    funInsertTextObjectButton(22);
                    break;
            case 'R':
                    funInsertTextObjectButton(5);
                    break;
            case 'S':
                    funInsertTextObjectButton(16);
                    break;
            case 'T':
                    funInsertTextObjectButton(17);
                    break;
            case 'U':
                    funInsertTextObjectButton(2);
                    break;
            case 'V':
                    funInsertTextObjectButton(8);
                    break;
            case 'W':
                    funInsertTextObjectButton(8);
                    break;
            case 'X':
                    funInsertTextObjectButton(3);
                    break;
            case 'Y':
                    funInsertTextObjectButton(13);
                    break;

            case 'Z':
                    funInsertTextObjectButton(15);
                    break;
            default:
                textEdit->insertPlainText("_");
            }
            ++data;
        }
}

//void Window::funinsertTextObjectButtonCYR_RUN()
//{
//        textEdit->selectAll();
//        QString newtext = textEdit->toPlainText();
//        newtext = newtext.toUpper();
//        textEdit->setText(newtext);
//        QChar *data = newtext.data();
//        textEdit->clear();
//        while (!data->isNull()) {
//            switch (data->unicode()) // https://ru.pinterest.com/pin/841469511605443729/
//            {
//            // взято https://uk.wikipedia.org/wiki/Кирилиця
//            // соответствие https://ru.pinterest.com/pin/841469511605443729/
//            case 'А':
//                    funInsertTextObjectButton(4);
//                    break;
//            case 'Б':
//                    funInsertTextObjectButton(4);
//                    break;
//            case 'В':
//                    funInsertTextObjectButton(8);
//                    break;
//            case 'Г':
//                    funInsertTextObjectButton(7);
//                    break;
//            case 'Д':
//                    funInsertTextObjectButton(3);
//                    break;
//            case 'Е':
//                    funInsertTextObjectButton(13);
//                    break;
//            case 'Ё':
//                    funInsertTextObjectButton(13);
//                    break;
//            case 'Ж':
//                    funInsertTextObjectButton(19);
//                    break;
//            case 'З':
//                    funInsertTextObjectButton(15);
//                    break;
//            case 'И':
//                    funInsertTextObjectButton(11);
//                    break;
//            case 'Й':
//                    funInsertTextObjectButton(11);
//                    break;
//            case 'К':
//                    funInsertTextObjectButton(6);
//                    break;
//            case 'Л':
//                    funInsertTextObjectButton(21);
//                    break;
//            case 'М':
//                    funInsertTextObjectButton(20);
//                    break;
//            case 'Н':
//                    funInsertTextObjectButton(10);
//                    break;
//            case 'О':
//                    funInsertTextObjectButton(23);
//                    break;
//            case 'П':
//                    funInsertTextObjectButton(22);
//                    break;
//            case 'Р':
//                    funInsertTextObjectButton(15);
//                    break;
//            case 'С':
//                    funInsertTextObjectButton(16);
//                    break;
//            case 'Т':
//                    funInsertTextObjectButton(17);
//                    break;
//            case 'У':
//                    funInsertTextObjectButton(2);
//                    break;
//            case 'Ф':
//                    funInsertTextObjectButton(1);
//                    break;
//            case 'Х':
//                    funInsertTextObjectButton(9);
//                    break;
//            case 'Ц':
//                    funInsertTextObjectButton(22);
//                    break;
//            case 'Ч':
//                    funInsertTextObjectButton(22);
//                    break;
//            case 'Ш':
//                    funInsertTextObjectButton(24);
//                    break;
//            case 'Щ':
//                    funInsertTextObjectButton(24);
//                    break;
//            case 'Ъ':
//                    funInsertTextObjectButton(25);
//                    break;
//            case 'Ы':
//                    funInsertTextObjectButton(11);
//                    break;
//            case 'Ь':
//                    funInsertTextObjectButton(25);
//                    break;
//            case 'Э':
//                    funInsertTextObjectButton(15);
//                    break;
//            case 'Ю':
//                    funInsertTextObjectButton(15);
//                    break;
//            case 'Я':
//                    funInsertTextObjectButton(15);
//                    break;
//            case 'Є':
//                    funInsertTextObjectButton(13);
//                    break;
//            case 'Ї':
//                    funInsertTextObjectButton(11);
//                    break;
//            case 'І':
//                    funInsertTextObjectButton(11);
//                    break;
//            case 'Ґ':
//                    funInsertTextObjectButton(7);
//                    break;
//            case 'Ў':
//                    funInsertTextObjectButton(8);
//                    break;
//            case 'Ћ':
//                    funInsertTextObjectButton(22);
//                    break;

//            default:
//                textEdit->insertPlainText("_");
//            }
//            ++data;
//        }
//}

void Window::funInsertTextObjectButton1(){ funInsertTextObjectButton(1); }
void Window::funInsertTextObjectButton2(){ funInsertTextObjectButton(2); }
void Window::funInsertTextObjectButton3(){ funInsertTextObjectButton(3); }
void Window::funInsertTextObjectButton4(){ funInsertTextObjectButton(4); }
void Window::funInsertTextObjectButton5(){ funInsertTextObjectButton(5); }
void Window::funInsertTextObjectButton6(){ funInsertTextObjectButton(6); }
void Window::funInsertTextObjectButton7(){ funInsertTextObjectButton(7); }
void Window::funInsertTextObjectButton8(){ funInsertTextObjectButton(8); }
void Window::funInsertTextObjectButton9(){ funInsertTextObjectButton(9); }
void Window::funInsertTextObjectButton10(){ funInsertTextObjectButton(10); }
void Window::funInsertTextObjectButton11(){ funInsertTextObjectButton(11); }
void Window::funInsertTextObjectButton12(){ funInsertTextObjectButton(12); }
void Window::funInsertTextObjectButton13(){ funInsertTextObjectButton(13); }
void Window::funInsertTextObjectButton14(){ funInsertTextObjectButton(14); }
void Window::funInsertTextObjectButton15(){ funInsertTextObjectButton(15); }
void Window::funInsertTextObjectButton16(){ funInsertTextObjectButton(16); }
void Window::funInsertTextObjectButton17(){ funInsertTextObjectButton(17); }
void Window::funInsertTextObjectButton18(){ funInsertTextObjectButton(18); }
void Window::funInsertTextObjectButton19(){ funInsertTextObjectButton(19); }
void Window::funInsertTextObjectButton20(){ funInsertTextObjectButton(20); }
void Window::funInsertTextObjectButton21(){ funInsertTextObjectButton(21); }
void Window::funInsertTextObjectButton22(){ funInsertTextObjectButton(22); }
void Window::funInsertTextObjectButton23(){ funInsertTextObjectButton(23); }
void Window::funInsertTextObjectButton24(){ funInsertTextObjectButton(24); }
void Window::funInsertTextObjectButton25(){ funInsertTextObjectButton(25); }

void Window::funInsertTextObjectButton(int aaa)
{

    QString fileName = ":/files/" + QString::number(aaa) + ".svg";
    fileNameLineEdit->setText(fileName);
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Error Opening File"),
                             tr("Could not open '%1'").arg(fileName));
    }

    QByteArray svgData = file.readAll();

    QTextCharFormat svgCharFormat;
    svgCharFormat.setObjectType(SvgTextFormat);
    QSvgRenderer renderer(svgData);

    QImage svgBufferImage(renderer.defaultSize(), QImage::Format_ARGB32);
    QPainter painter(&svgBufferImage);
    renderer.render(&painter, svgBufferImage.rect());

    svgCharFormat.setProperty(SvgData, svgBufferImage);

    QTextCursor cursor = textEdit->textCursor();
    cursor.insertText(QString(QChar::ObjectReplacementCharacter), svgCharFormat);
    textEdit->lineWidth();// >setTextCursor(cursor);
}

void Window::setupTextObject()
{
    QObject *svgInterface = new SvgTextObject;
    svgInterface->setParent(this);
    textEdit->document()->documentLayout()->registerHandler(SvgTextFormat, svgInterface);
}

void Window::setupGui()
{
    // https://stackoverflow.com/questions/3137805/how-to-set-image-on-qpushbutton
    QGridLayout *gridLayout = new QGridLayout;

    QPushButton *insertTextObjectButtonENG_RUN = new QPushButton("eng|run");
    connect(insertTextObjectButtonENG_RUN, SIGNAL(clicked()),
                        this, SLOT(funinsertTextObjectButtonENG_RUN()));
    gridLayout->addWidget(insertTextObjectButtonENG_RUN,0,0,1,1);

 //   QPushButton *insertTextObjectButtonCYR_RUN = new QPushButton("cyr|run");
//    connect(insertTextObjectButtonCYR_RUN, SIGNAL(clicked()),
//                        this, SLOT(funinsertTextObjectButtonCYR_RUN()));
//    gridLayout->addWidget(insertTextObjectButtonCYR_RUN,0,1,1,1);

    fileNameLineEdit = new QLineEdit;
    gridLayout->addWidget(fileNameLineEdit,0,2,1,1);

    fileNameLabel = new QLabel(tr("Rune:"));
        gridLayout->addWidget(fileNameLabel,0,3,1,1);

    QPushButton *insertTextObjectButton[26];//= new QPushButton(); //(tr("Insert Image"));
    QString fileName[26];    //QPixmap *pixmap[26]; // https://www.qtcentre.org/threads/67171-Arrays-of-QPixmaps-and-QGraphicsPixmapItems
    QVector< QPixmap > pixmap;
    pixmap.resize(26);
    QVector< QIcon > ButtonIcon;
    ButtonIcon.resize(26);

    int row = 0, column = 0;
    for ( int i=0; i < 25; i++) {
    fileName[i] =  ":/files/" + QString::number(i+1) + ".svg";
    fileNameLineEdit->setText(fileName[i]);
    pixmap[i] = QPixmap(fileName[i]);
        ButtonIcon[i] = QIcon(pixmap[i]);
        insertTextObjectButton[i] = new QPushButton();
        insertTextObjectButton[i]->setIcon(ButtonIcon[i]);
        insertTextObjectButton[i]->setIconSize(QSize(24, 24));

    switch (i+1) {
    case 1:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton1()));
        break;
    case 2:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton2()));
        break;
    case 3:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton3()));
        break;
    case 4:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton4()));
        break;
    case 5:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton5()));
        break;
    case 6:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton6()));
        break;
    case 7:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton7()));
        break;
    case 8:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton8()));
        break;
    case 9:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton9()));
        break;
    case 10:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton10()));
        break;
    case 11:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton11()));
        break;
    case 12:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton12()));
        break;
    case 13:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton13()));
        break;
    case 14:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton14()));
        break;
    case 15:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton15()));
        break;
    case 16:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton16()));
        break;
    case 17:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton17()));
        break;
    case 18:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton18()));
        break;
    case 19:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton19()));
        break;
    case 20:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton20()));
        break;
    case 21:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton21()));
        break;
    case 22:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton22()));
        break;
    case 23:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton23()));
        break;
    case 24:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton24()));
        break;
    case 25:
        connect(insertTextObjectButton[i], SIGNAL(clicked()),
                            this, SLOT(funInsertTextObjectButton25()));
        break;
    }

    // addWidget(*Widget, row, column, rowspan, colspan)
    // 0th row
    gridLayout->addWidget(insertTextObjectButton[i],row+1,column,1,1);
    column++;
    // NN th row
    // Рунный ряд делится на три этта, по восемь рун в каждом. Это этты Фрейра, Хагаля и Тюра.
    // https://studfile.net/preview/5411514/page:4/
    if ((column+1)%9 == 0) {   row++; column = 0; } // gridLayout->addWidget(,j,i+1);
    }
    textEdit = new QTextEdit;

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(textEdit);
    mainLayout->addLayout(gridLayout);
    setLayout(mainLayout);
}
