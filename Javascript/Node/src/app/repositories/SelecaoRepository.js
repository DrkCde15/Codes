import connection from "../../../infra/data_base.js";

class SelecaoRepository {

    findAll() {
        const sql = "SELECT * FROM selecoes;"
        return new Promise((resolve, reject) => {
            connection.query(sql, (erro, resultado) => {
                if (erro) return reject('Não foi possível localizar')
                return resolve(resultado)
            })
        })
    }

    findById(id) {
        const sql = "SELECT * FROM selecoes WHERE id=?;"
        return new Promise((resolve, reject) => {
            connection.query(sql, id, (erro, resultado) => {
                if (erro) return reject('Não foi possível localizar')
                return resolve(resultado[0])
            })
        })
    }

    create(selecao) {
        const sql = "INSERT INTO selecoes SET ?;"
        return new Promise((resolve, reject) => {
            connection.query(sql, selecao, (erro, resultado) => {
                if (erro) return reject('Não foi possível cadastrar')
                return resolve(resultado)
            })
        })
    }

    update(selecao, id) {
        const sql = "UPDATE selecoes SET ? WHERE id=?;"
        return new Promise((resolve, reject) => {
            connection.query(sql, [selecao, id], (erro, resultado) => {
                if (erro) return reject('Não foi possível atualizar')
                return resolve(resultado)
            })
        })
    }

    delete(id) {
        const sql = "DELETE FROM selecoes WHERE id=?;"
        return new Promise((resolve, reject) => {
            connection.query(sql, id, (erro, resultado) => {
                if (erro) return reject('Não foi possível excluir')
                return resolve(resultado)
            })
        })
    }

}

export default new SelecaoRepository()
