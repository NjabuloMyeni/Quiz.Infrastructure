#include <iostream>;
#include <vector>;
#include "../server/server.cpp";
#include "../client/startUp.cpp"

using namespace std;

int main()
{
    Server server;
    StartUp startUp(server);

    cout << "Team Innovators :";
    return 0;
}