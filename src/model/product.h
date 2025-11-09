#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QMap>

class ProductModel {
public:
    ProductModel();

    QString getProductName(const QString &barcode) const;

private:
    QMap<QString, QString> products; // código -> nombre
};

#endif // PRODUCT_H
