#ifndef STAN_LANG_AST_NODE_INT_LOCAL_VAR_DECL_DEF_HPP
#define STAN_LANG_AST_NODE_INT_LOCAL_VAR_DECL_DEF_HPP

#include <stan/lang/ast.hpp>
#include <string>

namespace stan {
  namespace lang {

    int_local_var_decl::int_local_var_decl() { }

    int_local_var_decl::int_local_var_decl(const std::string& name,
                                           const expression& def)
      : var_decl(name, bare_expr_type(int_type()), def) { }
  }
}
#endif