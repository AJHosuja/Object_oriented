#include "mainwindow.h"     // MainWindow -luokan määrittelytiedosto.
#include "ui_mainwindow.h" // Käyttöliittymälomakkeen koodin sisältämä tiedosto. Ohjelmoija ei muokkaa tätä tiedostoa.


MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent) // Aliluokan muodostinfunktiolle välitetty osoitinparametri välitetään yliluokalle. Ei tarvita tässä (=nullptr).
, ui(new Ui::MainWindow) // Luodaan ui olio. Tämä rivi voitaisiin kommentoida, ja luoda ui olio normaalisti muodostinfunktiossa.
{
// Kutsutaan ui olion avulla funktiota setupUi(this), joka näyttää luodun käyttöliittymän.
// Funktio setupUi(this) löytyy tiedostosta ui_mainwindow.h, ja se rakentuu sen mukaisesti miten käyttöliittymä rakennetaan
// työkalun kohdassa Forms.
ui->setupUi(this);
}
MainWindow::~MainWindow()
{
delete ui;
ui = nullptr; // Tämä rivi on lisätty itse. On hyvän koodaustavan mukaista asettaa osoittimet puuttuvaan arvoon, kun niitä ei käytetä.
}

void MainWindow::on_myFirstPushButton_clicked()
{
  this->close();
}


void MainWindow::on_plus_clicked()
{
    QString lukuYksi, lukuKaksi;
    lukuYksi= ui->myLineEdit_1->text();
    lukuKaksi= ui->myLineEdit_2->text();
    float luku1,luku2,summa;
    luku1 = lukuYksi.toFloat();
    luku2 = lukuKaksi.toFloat();
    summa = luku1+luku2;
    ui->vastaus->setNum(summa);

}


void MainWindow::on_plus_2_clicked()
{
    QString lukuYksi, lukuKaksi;
    lukuYksi= ui->myLineEdit_1->text();
    lukuKaksi= ui->myLineEdit_2->text();
    float luku1,luku2,summa;
    luku1 = lukuYksi.toFloat();
    luku2 = lukuKaksi.toFloat();
    summa = luku1-luku2;
    ui->vastaus->setNum(summa);

}


void MainWindow::on_plus_3_clicked()
{
    QString lukuYksi, lukuKaksi;
    lukuYksi= ui->myLineEdit_1->text();
    lukuKaksi= ui->myLineEdit_2->text();
    float luku1,luku2,summa;
    luku1 = lukuYksi.toFloat();
    luku2 = lukuKaksi.toFloat();
    summa = luku1*luku2;
    ui->vastaus->setNum(summa);
}


void MainWindow::on_plus_4_clicked()
{
    QString lukuYksi, lukuKaksi;
    lukuYksi= ui->myLineEdit_1->text();
    lukuKaksi= ui->myLineEdit_2->text();
    float luku1,luku2,summa;
    luku1 = lukuYksi.toFloat();
    luku2 = lukuKaksi.toFloat();
    summa = luku1/luku2;
    ui->vastaus->setNum(summa);
}

