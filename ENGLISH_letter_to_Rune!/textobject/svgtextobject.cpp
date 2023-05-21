
#include <QtWidgets>
#include <QtSvg>

#include "svgtextobject.h"
#include "window.h"

QSizeF SvgTextObject::intrinsicSize(QTextDocument * /*doc*/, int /*posInDocument*/,
                                    const QTextFormat &format)
{
    QImage bufferedImage = qvariant_cast<QImage>(format.property(Window::SvgData));
    QSize size = bufferedImage.size();
    
    if (size.height() > 32)
        size *= 32.0 / (double) size.height();

    return QSizeF(size);
}

void SvgTextObject::drawObject(QPainter *painter, const QRectF &rect,
                               QTextDocument * /*doc*/, int /*posInDocument*/,
                               const QTextFormat &format)
{
    QImage bufferedImage = qvariant_cast<QImage>(format.property(Window::SvgData));

    painter->drawImage(rect, bufferedImage);
}
