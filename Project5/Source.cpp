#include <iostream>
#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	Worker w;
	w.getWorkers(2010);
	std::cout << "============" << std::endl;
	w.GetWorkersBySalary(2500);
	std::cout << "============" << std::endl;
	w.GetWorkersByPosition("Accountant");
	std::cout << "============" << std::endl;
	Worker c;
	c.sortBySalary();
	for (auto worker : c.workers)
	{
		std::cout << worker.salary << std::endl;
	}
	system("pause");
	return 0;
}