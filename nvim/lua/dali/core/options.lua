local opt = vim.opt

-- line numbers
opt.number = true
opt.relativenumber = true

-- tabs / indentation
opt.tabstop = 4
opt.softtabstop = 4
opt.shiftwidth = 4
opt.expandtab = true
opt.smartindent = true

-- line wrapping
opt.wrap = false

-- search settings
opt.ignorecase = true
opt.smartcase = true

opt.hlsearch = true
opt.incsearch = true

-- swap files
opt.swapfile = false
opt.backup = false

-- appearance
opt.termguicolors = true
opt.guicursor = ""

opt.scrolloff = 8

-- clipboard
opt.clipboard:append("unnamedplus")

-- split windows
opt.splitright = true
opt.splitbelow = true
