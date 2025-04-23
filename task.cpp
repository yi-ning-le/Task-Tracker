#include "task.hpp"

Task::Task() {
  // 初始化的时候任务都是初始化状态
  status_ = TaskStatus::Init;
}

void Task::ChangeStatus(TaskStatus status) { status_ = status; }

TaskStatus Task::CheckStatus() { return status_; }