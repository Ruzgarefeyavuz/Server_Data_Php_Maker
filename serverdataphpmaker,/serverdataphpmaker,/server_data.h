#pragma once
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void create_server_data_php(string server_ip, string server_port) {
	string server_data_php = "server|" + server_ip + "\nport|" + server_port + "\ntype|1\n\nbeta_server|" + server_ip + "\nbeta_port|" + server_port + "\nbeta_type|1\nmeta|betablocks\nRTENDMARKERBS1001";
	ofstream baba("server_data.php");;
	baba << server_data_php;
	baba.close();
	cout << " Done server_data.php.\n Server ip: " << server_ip << "\nServer Port: " << server_port << endl;

}