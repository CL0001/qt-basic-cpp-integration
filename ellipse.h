#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <QPainter> // Required for utilizing the QPainter class on line 21
#include <QQmlEngine>
#include <QQuickPaintedItem>

// After completing the class, register the .h and .cpp files in CMakeLists.txt under qt_add_qml_module() in SOURCES
class Ellipse : public QQuickPaintedItem
{
    Q_OBJECT // Enables the class to use meta-object features like 'slots' and 'signals'
    QML_ELEMENT // Marks the class for QML integration

    // After declaring Q_PROPERTY, right-click and select 'Refactor' to automatically generate .cpp file definitions
    // Q_PROPERTY exposes class variables to QML
    Q_PROPERTY(float border READ getBorder WRITE setBorder NOTIFY borderChanged FINAL) // Enables QML integration with getter and setter functions; NOTIFY specifies a signal for changes; FINAL prevents overriding
    Q_PROPERTY(QColor color MEMBER m_color NOTIFY colorChanged FINAL) // MEMBER links the property directly to the class variable
public:
    Ellipse();
    float getBorder() const;
    void setBorder(float newBorder);

    // QQuickPaintedItem interface - added by refactoring the parent class and implementing a virtual function
    void paint(QPainter *painter);

    // Q_INVOKABLE exposes the method to QML
    Q_INVOKABLE void setProperties(float new_border, QColor new_color);

    // Methods in the public section declared with 'slots' can be accessed directly from QML or connected to signals
public slots:
    void ellipseInfo();
    // Example of how to connect methods to signals
    void onPropertyChange();

    // Signals are emitted using the 'emit' keyword; they are created automatically by NOTIFY after refactoring Q_PROPERTY
signals:
    void borderChanged();
    void colorChanged();

private:
    float m_border;
    QColor m_color;
};

#endif // ELLIPSE_H
