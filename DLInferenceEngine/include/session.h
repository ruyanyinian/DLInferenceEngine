//
// Created by qinyu on 2022/7/12.
//

#ifndef DLINFERENCEENGINE_SESSION_H
#define DLINFERENCEENGINE_SESSION_H
#include <iostream>

namespace DLInferEngine {
/**
 * ISession是一个接口, 负责以下职责
 * 1.负责读取模型, 比如说在linux, 可能包含mnn文件, ncnn文件, tflite文件
 * 2.负责推理过程
 * */
class ISession {
protected:
  virtual void load() = 0;
  virtual void inference() = 0;

};

/**
 * ISessionOption接口负责以下的职责
 * 负责一些模型的session options, 这些options可能是一些CPU调度等. 或者一些模型的常见选项
 * */
struct ISessionOption {
protected:
  virtual void setOptions() = 0;
};



}
#endif //DLINFERENCEENGINE_SESSION_H
