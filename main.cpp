#include "task.hpp"
#include <iostream>

int main() {
  Task task;
  TaskStatus task_status = task.CheckStatus();
  if (task_status == TaskStatus::Init)
    std::cout << "0" << std::endl;
  // task.ChangeStatus();
  return 0;
}