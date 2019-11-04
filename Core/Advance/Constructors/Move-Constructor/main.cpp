#include <iostream>
#include <vector>

/*************************************************************
 *
 * R-VALUE REFERENCES
 * r-values refer to the temporary objects which are to be assigned to a L-Value
 *
 * SYNTAX:
 *
 *      datatype &&ref_name = r_value;
 *
 *************************************************************
 *
 * MOVE CONSTRUCTOR:
 * we can define a move constructor, which can be used to copy R-Values to an object
 * instead of deep copying, we can just delete existing data and
 * point to the temporary data
 * and then set the temporary pointer of existing data to NULL
 * So that when it is destroyed, the data isn't deleted
 *
 *  Thus, we simply copy the source address
 *  And null out source pointer
 *
 *  Thus, very efficient
 *
 *  SYNTAX:
 *
 *      Type::Type (Type &&Type);
 *
 *************************************************************/

using namespace std;

class Move
{
private:
    int *data;

public:
    // Constructor
    Move(int d)
    {
        data = new int;
        *data = d;
        cout << "Constructor for : " << *data << endl;
    }

    // Deep Copy
    Move (const Move &source) : Move(*source.data)
    {
        cout << "Deep copy for : " << *data << endl;
    }

    // Move Constructor
    Move (Move &&source) noexcept : data {source.data}
    {
        source.data = nullptr;
        cout << "Move constructor for : " << *data << endl;
    }

    // Destructor
   ~Move()
   {
       if (data != nullptr)
           cout << "Destructor freeing data for : " << *data << endl;
       else
           cout << "Destructor freeing data for : nullptr"<< endl;

       delete data;
   }
};

int main() {

    vector<Move> vec;

    vec.push_back(Move {10});
    //vec.push_back(Move {20});

    return 0;
}