#include <iostream>
#include <vector> 
#include <queue>
#include <unordered_map>


using namespace std;

struct Ingredient {
    string name;
    int32_t cost;
};

struct Order {
    int64_t id = -1;
    int16_t cupsOfLemonade;
    double price;
    Customer customer;
};

struct Customer {
    // bool frugal;  //customer has a 50% chance of paying for their order
    string name;
    int64_t rewardsId = -1;    //if id is -1, they are not a rewards member
};

//declare custom constructor
struct CompareOrders {
    bool operator()(Order const& a, Order const& b){
        return a.id < b.id; //TODO: will there be a cse of the same id?
    }
};

struct LemonadeStand {
    double balance;
    string businessName;

    priority_queue<Order, vector<Order>, CompareOrders> orders;
    unordered_map<Ingredient, int32_t> inventory;  //what the ing is and qty
    //Transaction, vector<Transaction>, CompareTransactions>

};

//random algo for creation of a customer
Customer birthCustomer(LemonadeStand &ls) {

}


