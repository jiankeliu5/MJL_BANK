#ifndef UIREPORT_H_
#define UIREPORT_H_
#include "ui.h"
#include "uiReportQuery.h"
#include "uiReportSearch.h"
#include "uiReportSummary.h"
#include <QAction>

class UIReport : public QDialog
{
    Q_OBJECT
public:
    explicit UIReport(QDialog *parent = 0,Qt::WindowFlags f = Qt::FramelessWindowHint);
    ~UIReport();

    QLabel *lbHead;

    QPushButton *btnQueryTransDetail;
    QPushButton *btnSummary;
    QPushButton *btnSerachByNumber;

    QPushButton *btnCancel;
//    QPushButton *btnSubmit;
private:
    UIReportQuery *uiRQ;
    UIReportSearch *uiRSearch;
    UIReportSummary *uiRSum;

protected:
    void keyPressEvent(QKeyEvent *event);

public slots:
private slots:
    void slotShowQueryTrans();
    void slotShowSummary();
    void slotShowSearchTrans();

signals:
};

#endif  
