#include <iostream>
#include <memory>
#include <string>

using namespace std;

// Interface
class INotification
{
public:
    virtual void send(const string &message) = 0;
    virtual ~INotification() = default;
};

// Email notification
class Email : public INotification
{
public:
    void send(const string &email) override
    {
        cout << "Email received - " << email << endl;
    }
};

// WhatsApp notification
class Wp : public INotification
{
public:
    void send(const string &wp) override
    {
        cout << "WhatsApp received - " << wp << endl;
    }
};

// Factory
class NotificationFactory
{
public:
    static unique_ptr<INotification> create(const string &type)
    {
        if (type == "email")
        {
            return make_unique<Email>();
        }
        else if (type == "wp")
        {
            return make_unique<Wp>();
        }
        else
        {
            return nullptr; // IMPORTANT
        }
    }
};

// Service
class NotificationService
{
    unique_ptr<INotification> notifier;

public:
    explicit NotificationService(unique_ptr<INotification> n)
        : notifier(move(n)) {}

    void notify(const string &msg)
    {
        if (notifier)
            notifier->send(msg);
        else
            cout << "No notifier available!" << endl;
    }
};

int main()
{
    // Create notification via factory
    auto notifier = NotificationFactory::create("email");
    // auto notifier = NotificationFactory::create("wp");

    NotificationService service(move(notifier));
    service.notify("Hello from Factory Pattern!");

    return 0;
}
