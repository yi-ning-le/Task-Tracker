#pragma once

/**
 * @brief 任务的三种状态
 *
 */
enum class TaskStatus {
  Init = 0,    // 未完成（刚创建）
  Done = 1,    // 已完成
  Progress = 2 // 进行中
};

/**
 * @brief 用于表示一个任务
 * @details 每个任务都有几种状态，完成，进行中，刚开始创建
 */
class Task {
public:
  Task();
  ~Task() = default;

  void ChangeStatus(TaskStatus status);

  TaskStatus CheckStatus();

private:
  TaskStatus status_{};
};