module.exports = {
  module: {
    rules: [
      { test: /\.(re|ml)$/, use: 'bs-loader' },
    ]
  },
  resolve: {
    extensions: ['.re', '.ml', '.js']
  }
}
