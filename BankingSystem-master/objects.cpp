struct Customer {
    QString id;
    QString name;
    QString ssn;
    QString address;
    QString phone;
    QString email;
};

struct Account {
    QString id;
    QString customerID;
    QString accountnr;
    QString name;
    QString balance;
    QString date;
};

struct Transaction {
    QString id;
    QString fromID;
    QString toID;
    QString amount;
    QString date;
};
