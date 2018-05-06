#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
class Worker
{
	std::string name, position;


public:
	int hire_year, salary;
	std::vector< Worker> workers;
	Worker();
	Worker(std::string, std::string, int, int);
	~Worker();
	void getWorkers(int);
	void GetWorkersBySalary(int);
	void GetWorkersByPosition(std::string);
	bool operator <(const Worker &worker) const {
		return this->salary < worker.salary;
	}
	void sortBySalary();
};

