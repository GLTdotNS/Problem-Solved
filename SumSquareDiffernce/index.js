const sumOfTheSquare = () => {
  let result = 0;
  let num = 0;
  for (let i = 1; i <= 100; i++) {
    num = i * i;
    result += num;
  }
  return result;
};

const squareOfTheSum = () => {
  let squaredSum = 0;
  let sumOfNumbers = 0;

  for (let k = 0; k <= 100; k++) {
    sumOfNumbers += k;
  }

  squaredSum = sumOfNumbers * sumOfNumbers;
  return squaredSum;
};

console.log(squareOfTheSum() - sumOfTheSquare());
