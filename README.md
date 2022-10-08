# Std Vector class in Visual Studio C++ 2008 and earlier versions
Visual Studio C++ 2008與早期版本的sdt::vector類別，缺少了data()方法，因此加入StdVector，試圖補全該類別  

在引用StdVector.hpp前，定義 **ReplaceStdVector巨集** ，可將原始的vector類別，替換成StdVector類別，而不需要改變vector的類型名稱

## 實作原理
- 偵測編譯器及版本，在Visual Studio C++ 2008與早期版本中，啟用StdVector類別
- 偵測到 **ReplaceStdVector巨集** 時，使用巨集將vector替換成StdVector

## 環境
- Windows 10 家用版 64bit
- Microsoft Visual C++ 2005 Express 版

## 參考
- https://github.com/google/brotli/issues/200#issue-109522048
- https://en.cppreference.com/w/cpp/container/vector/data