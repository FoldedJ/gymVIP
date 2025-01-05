#ifndef COURSEMANAGE_H
#define COURSEMANAGE_H

#include <QWidget>
#include "insertCourse.h"
#include "queryAndModifyCourse.h"

namespace Ui {
class courseManage;
}

class courseManage : public QWidget
{
    Q_OBJECT

public:
    explicit courseManage(QWidget *parent = nullptr);
    ~courseManage();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::courseManage *ui;
    insertCourse *page0;
    queryAndModifyCourse *page2;

    // 用于记录当前选中的按钮
    QPushButton *currentSelectedButton;

    // 用于设置按钮的选中样式
    void setButtonSelectedStyle(QPushButton *button);

    // 用于恢复按钮的默认样式
    void setButtonDefaultStyle(QPushButton *button);
};

#endif // COURSEMANAGE_H
