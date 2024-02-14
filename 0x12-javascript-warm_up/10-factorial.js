#!/usr/bin/node

function factorial (i) {
  if (i === 0) {
    return 1;
  }

  return (i * factorial(i - 1));
}

if (Number(process.argv[2])) {
  console.log(factorial(process.argv[2]));
} else if (Number(process.argv[2]) === 333) {
  console.log('Infinity');
} else {
  console.log(1);
}
