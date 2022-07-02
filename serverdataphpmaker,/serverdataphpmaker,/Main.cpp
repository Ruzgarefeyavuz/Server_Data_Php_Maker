#include <iostream>
#include <fstream>
#include <vector>
#include "server_data.h"
using namespace std;

int main() {
	string server_port = "";
	string server_ip = "";
	cout << "Server ip: ";
	cin >> server_ip;
	cout << "Server port: ";
	cin >> server_port;
    
	create_server_data_php(server_ip, server_port);
	system("pause");



}
