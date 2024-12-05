#include "ellipse.h"

Ellipse::Ellipse()
{
    connect(this, &Ellipse::borderChanged, this, &Ellipse::onPropertyChange);
    connect(this, &Ellipse::colorChanged, this, &Ellipse::onPropertyChange);
}

float Ellipse::getBorder() const
{
    return m_border;
}

void Ellipse::setBorder(float newBorder)
{
    if (qFuzzyCompare(m_border, newBorder))
        return;
    m_border = newBorder;
    emit borderChanged();
}

void Ellipse::paint(QPainter *painter)
{
    QPen pen(m_color, m_border);
    painter->setPen(pen);
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->drawEllipse(QRect(m_border / 2, m_border / 2, width() - m_border, height() - m_border));
}

void Ellipse::setProperties(float new_border, QColor new_color)
{
    setBorder(new_border);

    if (new_color != m_color)
    {
        m_color = new_color;
        emit colorChanged();
    }
}

void Ellipse::ellipseInfo()
{
    qInfo() << QString("Ellipse's color: %1 - Ellipse's border: %2").arg(m_color.name()).arg(m_border);
}

void Ellipse::onPropertyChange()
{
    update();
}
