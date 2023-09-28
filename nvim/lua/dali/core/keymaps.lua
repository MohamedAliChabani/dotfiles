vim.g.mapleader = " "

local keymap = vim.keymap

-- general keymaps
keymap.set("n", "<leader>pv", ":Ex<CR>")
keymap.set("n", "<leader>nh", ":nohl<CR>")

keymap.set("n", "<leader>=", "<C-a>") -- increment number
keymap.set("n", "<leader>-", "<C-x>") -- decrement number

-- splits
keymap.set("n", "<leader>wv", "<C-w>v") -- split vertical
keymap.set("n", "<leader>ws", "<C-w>s") -- split horizontal
keymap.set("n", "<leader>wh", "<C-w>h") -- move to the left split
keymap.set("n", "<leader>wj", "<C-w>j") -- move down a split
keymap.set("n", "<leader>wk", "<C-w>k") -- move up a split
keymap.set("n", "<leader>wl", "<C-w>l") -- move to the left split
keymap.set("n", "<leader>wq", "<C-w>q") -- close split

-- tabs
keymap.set("n", "<leader>tt", ":tabnew<CR>")
keymap.set("n", "<leader>tn", ":tabnext<CR>")
keymap.set("n", "<leader>tp", ":tabprevious<CR>")

-- file operations
keymap.set("n", "<leader>fs", ":w<CR>")

-- Telescope keymaps
local builtin = require('telescope.builtin')
keymap.set('n', '<leader>ff', builtin.find_files, {})
keymap.set('n', '<leader>fg', builtin.live_grep, {})
keymap.set('n', '<leader>fb', builtin.buffers, {})
keymap.set('n', '<leader>fh', builtin.help_tags, {})
