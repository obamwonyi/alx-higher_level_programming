#!/usr/bin/node
const argv = process.argv;

if (argv.length > 2) {
  console.log('Argument found');
} else {
  console.log('No argument');
}
