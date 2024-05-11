# VarJsConverter

### Introduction

Translate the input variable names and variable values into JavaScript code.

In the first line of input.txt, you should enter either `js` or `ts` to indicate whether you want to output as a JavaScript or TypeScript file.

Write data in `input.txt`, translating the input variable names and variable values into JavaScript code, for example, `varName varNum`, such as `hatmic 2009` indicating the declaration of the `hatmic` variable and assigning it the value `2009`.

The current support is limited to variables declared with the `let` type, which can be either numerical or string variables.

### 介绍

将输入的变量名和变量值翻译成 JavaScript 代码。

在 input.txt 的第一行，您应该输入 `js` 或 `ts`，以指明您希望输出为 JavaScript 文件还是 TypeScript 文件。

在 `input.txt` 中写入数据，将输入的变量名和变量值翻译成 JavaScript 代码，例如 `varName varNum`，例如 `hatmic 2009` 表示声明 `hatmic` 变量并赋值为 `2009`。

当前支持仅限于使用 `let` 类型声明的变量，可以是数值变量或字符串变量。

### Input Output Case

##### #1

Input  (in input.txt)

```
js
hatmic 2009
```

Output (in output.js)

```javascript
let hatmic = 2009;
```

##### #2

Input (in input.txt)

```
js
hatmic 2009
hat mic
code cpp
code c
code javascript
code python
code dart
```

Output (in output.js)

```javascript
let hatmic = 2009;
let hat = "mic";
let code = "cpp";
code = "c";
code = "javascript";
code = "python";
code = "dart";
```

##### #3

Input (in input.txt)

```
ts
hatmic 2009
hat mic
code cpp
code c
code javascript
code python
code dart
```

Output (in output.ts)

```typescript
let hatmic = 2009;
let hat = "mic";
let code = "cpp";
code = "c";
code = "javascript";
code = "python";
code = "dart";
```
