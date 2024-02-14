#!/usr/bin/node

const size = parseInt(process.argv[2]);
if (!(size)) {
  console.log('Missing size');
} else {
  for (let x = 0; x < size; x++) {
    let output = '';
    for (let i = 0; i < size; i++) {
      output = output.concat('X');
    }
    console.log(output);
  }
}
