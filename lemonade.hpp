#include <iostream>
#include <vector> 
#include <queue>
#include <map>


using namespace std;

struct Order {
    int64_t id = -1;
    int16_t cupsOfLemonade;
    double price;
};

struct Customer {
    bool frugal;  //customer has a 50% chance of paying for their order
    string name;
    Order order;

    int64_t rewardsId = -1;    //if id is -1, they are not a rewards member

};

//declare custom constructor
struct CompareOrders {
    bool operator()(Customer const& a, Customer const& b){

        //if customer.order id > customer.order id do what

        // if 
    }
};

struct LemonadeStand {
    double balance;
    string businessName;

    priority_queue<Customer> customers;




};


//use a random algo to produce x amount of customers that have a rewards plan
