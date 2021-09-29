# 42cpp-module-02

### ex03
- [点と三角形の当たり判定( 内外判定 )](http://www.sousakuba.com/Programming/gs_hittest_point_triangle.html)
- [How to determine if a point is in a 2D triangle? [closed]](https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle)
- [const_cast conversion](https://en.cppreference.com/w/cpp/language/const_cast)

### ex02
- 静的メンバ関数
- [C++で前置・後置インクリメント/デクリメント演算子をオーバーロードする](https://mickey24.hatenablog.com/entry/20081021/1224590753)
- [演算子オーバーロード | Programming Place Plus　C++編【言語解説】　第１９章](https://programming-place.net/ppp/contents/cpp/language/019.html#conversion_op)

### ex01
- Fixed Point Number
  - [Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
- ostream 演算子のオーバーロード（`<<`）
  - [Stream extraction and insertion](https://en.cppreference.com/w/cpp/language/operators)
  - [C++演算子オーバーロード大全 Shift](https://qiita.com/rinse_/items/9d87d5cb0dc1e89d005e#shift)
```c++
float fl = 3.25;
std::cout << std::bitset<sizeof(float)*CHAR_BIT>(*reinterpret_cast<unsigned int*>(&fl)) << std::endl;
```

### ex00
- [コピーコンストラクタ](https://programming.pc-note.net/cpp/constructor2.html)
  - A `copy constructor` is used to initialize a previously uninitialized object from some other object's data.
  - 「デフォルトコピーコンストラクタ」と「自分で定義するコピーコンストラク」がある．
  - デフォルトコピーコンストラクタは，自分と同じクラスのインスタンスを引数とするコンストラクタで，メンバ変数をすべてコピーしたものが新しく作られる．
  - 自分で定義するコピーコンストラクタは，自分自身のインスタンスの参照を引数に受け取るコンストラクタのこと．
  - コピーコンストラクの禁止を行うこともできる．
- 代入演算子(`=`)
  - An `assignment operator` is used to replace the data of a previously initialized object with some other object's data.
- 演算子のオーバーロード（`=`）
  - [基本クラスを指すポインタは、その派生クラスも指すことができる](http://www.ced.is.utsunomiya-u.ac.jp/lecture/2012/prog/p3/kadai3/virtualfunc2.php)

## References
### Coplien form
- [Coplien form example C++](https://stackoverflow.com/questions/21219590/coplien-form-example-c)

### Understanding Floating Point Numbers
by Jeff Bezanson
- Every programmer should understand enough about floating point numbers to avoid the pitfalls of assuming perfect precision.
  - [Background: Accuracy vs. Precision](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
  - [Floating Point Representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
  - [Bonus: Printing Floating Point Numbers Cleanly](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
