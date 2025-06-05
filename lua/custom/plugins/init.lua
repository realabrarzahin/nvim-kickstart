-- You can add your own plugins here or in other files in this directory!
--  I promise not to create any merge conflicts in this directory :)
--
-- See the kickstart.nvim README for more information
return {
  {
    'kylechui/nvim-surround',
    version = '*', -- Use the latest version
    event = 'VeryLazy', -- Lazy-load on demand
    config = function()
      require('nvim-surround').setup {}
    end,
  },
}
