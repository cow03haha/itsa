# 複數運算

使用運算子重載(operator overloading)來自定義特定類型上的運算子行為

------

### 複數
- 可以寫為`a + bi`
- 乘法
    1. `(a + bi) × (c + di) = ac + adi + bci + bdi^2`
    2. 因為`i^2 = -1`，所以`bdi^2 = -bd`
    3. 將其代回原式，可得`(a + bi) × (c + di) = (ac - bd) + (ad + bc)i`