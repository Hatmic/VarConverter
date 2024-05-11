# VarJsConverter

### Introduction

Translate the input variable names and variable values into JavaScript code.

In the first line of input.txt, you should enter either “js” or “ts” to indicate whether you want to output as a JavaScript or TypeScript file.

Write data in input.txt, translating the input variable names and variable values into JavaScript code, for example, varName varNum, such as “hatmic 2009” indicating the declaration of the hatmic variable and assigning it the value 2009.

The current support is limited to variables declared with the ‘let’ type, which can be either numerical or string variables.

### Input Output Case

##### #1

Input  (in input.txt)

```
js
hatmic 2009
```

Output (in main.js)

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
