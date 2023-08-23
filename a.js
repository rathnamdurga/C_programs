const {Web3} = require('web3');

const web3 = new Web3('https://mainnet.infura.io/v3/4c3370297f4b49ce9e9357b947c655b6');
web3.eth.getBlockNumber().then(console.log).catch(console.error);
