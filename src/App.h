#pragma once

#include "EasyCEFHooks.h"
#include "shellapi.h"
class App {
	httplib::Server* httpServer = nullptr;
	std::thread* server_thread;
	thread* create_server(string apiKey);
	void extractPlugins();
	string readConfig(const string& key, const string& def);
	void writeConfig(const string& key, const string& val);
public:
	App();
	~App();
};