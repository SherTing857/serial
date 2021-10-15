/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QPlainTextEdit *recvEdit;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QComboBox *serialCb;
    QLabel *label;
    QComboBox *baudrateCb;
    QLabel *label_2;
    QComboBox *dataCb;
    QLabel *label_3;
    QComboBox *stopCb;
    QLabel *label_4;
    QComboBox *checkCb;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *openPb;
    QSpacerItem *horizontalSpacer;
    QPushButton *closePb;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendPb;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *clearPb;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(491, 327);
        Widget->setMinimumSize(QSize(80, 60));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        recvEdit = new QPlainTextEdit(Widget);
        recvEdit->setObjectName(QStringLiteral("recvEdit"));
        recvEdit->setReadOnly(true);

        gridLayout_2->addWidget(recvEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialCb = new QComboBox(Widget);
        serialCb->setObjectName(QStringLiteral("serialCb"));

        gridLayout->addWidget(serialCb, 0, 0, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        baudrateCb = new QComboBox(Widget);
        baudrateCb->addItem(QString());
        baudrateCb->addItem(QString());
        baudrateCb->addItem(QString());
        baudrateCb->addItem(QString());
        baudrateCb->setObjectName(QStringLiteral("baudrateCb"));

        gridLayout->addWidget(baudrateCb, 1, 0, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        dataCb = new QComboBox(Widget);
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->addItem(QString());
        dataCb->setObjectName(QStringLiteral("dataCb"));

        gridLayout->addWidget(dataCb, 2, 0, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        stopCb = new QComboBox(Widget);
        stopCb->addItem(QString());
        stopCb->addItem(QString());
        stopCb->addItem(QString());
        stopCb->setObjectName(QStringLiteral("stopCb"));

        gridLayout->addWidget(stopCb, 3, 0, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        checkCb = new QComboBox(Widget);
        checkCb->addItem(QString());
        checkCb->setObjectName(QStringLiteral("checkCb"));

        gridLayout->addWidget(checkCb, 4, 0, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(80, 60));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 30, 111, 21));
        label_6->setMinimumSize(QSize(60, 0));
        QFont font;
        font.setPointSize(17);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(groupBox);

        sendEdit = new QLineEdit(Widget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setMinimumSize(QSize(60, 50));

        verticalLayout_2->addWidget(sendEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        openPb = new QPushButton(Widget);
        openPb->setObjectName(QStringLiteral("openPb"));

        horizontalLayout_6->addWidget(openPb);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        closePb = new QPushButton(Widget);
        closePb->setObjectName(QStringLiteral("closePb"));

        horizontalLayout_6->addWidget(closePb);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        sendPb = new QPushButton(Widget);
        sendPb->setObjectName(QStringLiteral("sendPb"));

        horizontalLayout_6->addWidget(sendPb);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        clearPb = new QPushButton(Widget);
        clearPb->setObjectName(QStringLiteral("clearPb"));

        horizontalLayout_6->addWidget(clearPb);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        baudrateCb->setCurrentIndex(1);
        dataCb->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        baudrateCb->setItemText(0, QApplication::translate("Widget", "4800", nullptr));
        baudrateCb->setItemText(1, QApplication::translate("Widget", "38400", nullptr));
        baudrateCb->setItemText(2, QApplication::translate("Widget", "9600", nullptr));
        baudrateCb->setItemText(3, QApplication::translate("Widget", "115200", nullptr));

        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        dataCb->setItemText(0, QApplication::translate("Widget", "5", nullptr));
        dataCb->setItemText(1, QApplication::translate("Widget", "6", nullptr));
        dataCb->setItemText(2, QApplication::translate("Widget", "7", nullptr));
        dataCb->setItemText(3, QApplication::translate("Widget", "8", nullptr));

        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        stopCb->setItemText(0, QApplication::translate("Widget", "1", nullptr));
        stopCb->setItemText(1, QApplication::translate("Widget", "1.5", nullptr));
        stopCb->setItemText(2, QApplication::translate("Widget", "2", nullptr));

        label_4->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        checkCb->setItemText(0, QApplication::translate("Widget", "none", nullptr));

        label_5->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("Widget", "SERIAL", nullptr));
        openPb->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        closePb->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        sendPb->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        clearPb->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
