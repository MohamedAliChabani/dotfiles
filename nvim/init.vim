" Plugins
call plug#begin()
Plug 'lukas-reineke/indent-blankline.nvim'
Plug 'morhetz/gruvbox'
Plug 'kevinoid/vim-jsonc'
Plug 'shinchu/lightline-gruvbox.vim'
Plug 'tpope/vim-commentary'
Plug 'neoclide/coc.nvim', { 'branch': 'master', 'do': 'yarn install --frozen-lockfile' }
Plug 'vim-python/python-syntax'
Plug 'itchyny/lightline.vim'
Plug 'junegunn/goyo.vim'
Plug 'preservim/nerdtree'
Plug 'dylanaraps/wal.vim'
Plug 'ryanoasis/vim-devicons'
call plug#end()

let mapleader = " "


" Colorscheme
colorscheme gruvbox


" Sets
set tabstop=4 softtabstop=4
set shiftwidth=4
set expandtab
set smartindent

set guicursor=

set scrolloff=8

set incsearch

set noswapfile
set nobackup

set number
set relativenumber

" Start NERDTree when Vim starts with a directory argument.
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 1 && isdirectory(argv()[0]) && !exists('s:std_in') |
    \ execute 'NERDTree' argv()[0] | wincmd p | enew | execute 'cd '.argv()[0] | endif


" Lightline
let g:lightline = {}
let g:lightline.colorscheme = 'gruvbox'


" Ale
let b:ale_linters = {'python': ['pylint'], 'c': ['astyle']}
let b:ale_fixers = {'python': ['black']}

highlight Normal ctermbg=none
highlight NonText ctermbg=none

" nnoremap
nnoremap <C-n> :NERDTreeToggle<CR>
nnoremap <C-g> :Goyo<CR>

" Indent Plugin
let g:indent_blankline_char='┆'

inoremap <silent><expr> <TAB>
      \ coc#pum#visible() ? coc#pum#next(1) :
      \ CheckBackspace() ? "\<Tab>" :
      \ coc#refresh()
inoremap <expr><S-TAB> coc#pum#visible() ? coc#pum#prev(1) : "\<C-h>"

function! CheckBackspace() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction
