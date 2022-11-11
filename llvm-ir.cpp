#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"

using namespace llvm;

int main()
{
  LLVMContext context;
  Module* module = new Module("top", context);
  //设定目标机器
  module->setTargetTriple("This is test");
  IRBuilder<> builder(context);


  //打印module的信息
  module->print(outs(), nullptr);
  return 0;
}